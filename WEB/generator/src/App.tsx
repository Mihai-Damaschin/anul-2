import { Button, Col, Form, InputNumber, Modal, Row } from "antd";
import React from "react";

import "./App.scss";

interface $Object {
  [key: string]: any;
}

const layout = {
  labelCol: { span: 8 },
  wrapperCol: { span: 16 },
};

const tailLayout = {
  wrapperCol: { offset: 6, span: 16 },
};

const App = () => {
  const [modal, contextHolder] = Modal.useModal();

  const onFinish = (values: $Object) => {
    const listGenerator = (list: object = {}): {} => {
      const newNumber = Math.floor(Math.random() * values.n);

      return Object.keys(list).length < values.m
        ? listGenerator({
            ...list,
            [newNumber]: newNumber,
          })
        : list;
    };

    modal.info({
      content: <>{Object.values(listGenerator()).map((i) => `${i} `)}</>,
    });
  };

  return (
    <div className="app">
      {contextHolder}

      <Row justify="center" align="middle" className="form-wrapper">
        <Col span={4}>
          <Form {...layout} onFinish={onFinish}>
            <Form.Item name="m" label="m" required>
              <InputNumber size="large" min={1} />
            </Form.Item>

            <Form.Item name="n" label="n" required>
              <InputNumber size="large" min={2} />
            </Form.Item>

            <Form.Item {...tailLayout}>
              <Button htmlType="submit">Vezi rezultatul</Button>
            </Form.Item>
          </Form>
        </Col>
      </Row>
    </div>
  );
};

export default App;
